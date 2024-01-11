/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:30:59 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/11 22:39:20 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedloser.h"

void	srch_n_replace(std::string& buffer, std::string const target, const std::string& rep)
{
	size_t	pos;
	
	if(buffer.empty() || target.empty())
		return;
	pos = 0;
	while (42)
	{
		pos = buffer.find(target, pos);
		if (pos < 0 || pos == std::string::npos)
			break;
		buffer.erase(pos, target.length());
		if (!rep.empty())
			buffer.insert(pos, rep);
		pos += rep.length();
		if (pos >= buffer.length())
            break;
	}
}

int	copy_n_replace(std::ifstream& inf, std::ofstream& outf, const std::string& target, const std::string& rep)
{
	std::string buffer;
	
	while(std::getline(inf, buffer))
	{
		if (inf.fail())
			return (-1);
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
	std::string outfile_name = argv[1] + std::string(".replace");
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
