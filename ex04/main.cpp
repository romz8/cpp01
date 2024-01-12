/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainjobert <romainjobert@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:30:59 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/12 11:47:47 by romainjober      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedloser.h"

void	srch_n_replace(std::string& buffer, std::string const target, const std::string& rep)
{
	size_t	pos;

	pos = buffer.find(target);
	while (pos != std::string::npos)
	{
		buffer.erase(pos, target.length());
		if (!rep.empty())
			buffer.insert(pos, rep);
		pos = buffer.find(target, pos + rep.length());
	}
	return ;
}

int	copy_n_replace(std::ifstream& inf, std::ofstream& outf, const std::string& target, const std::string& rep)
{
	std::string buffer;
	
	while(std::getline(inf, buffer))
	{
		if (inf.fail())
		{	
			std::cout << "Error while reading infile" << std::endl;
			return (-1);
		}
		srch_n_replace(buffer, target, rep);
		outf << buffer;
		if (!inf.eof())
			outf << std::endl;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Program takes 3 arguments and 3 only" << std::endl;
		std::exit(1);
	}
	std::ifstream infile(argv[1]);
	if(!infile.is_open())
	{
		std::cerr << "incorrect file, impossile to open" << std::endl;
		std::exit(1);
	}
	std::string outfile_name = argv[1];
	outfile_name.append(".replace");
	std::ofstream outfile(outfile_name, std::ios::out | std::ios::trunc);
	if ((!outfile.is_open()))
	{
		std::cerr << "impossile to create file " << outfile_name << std::endl;
		infile.close();
		std::exit(1);
	}
	copy_n_replace(infile, outfile, argv[2], argv[3]);
	infile.close();
	outfile.close();
	return (0);
}
