
# SAP : Pairwise structure alignment via double dynamic programming

## References
Users publishing results obtained with the program and its applications
should acknowledge its use by the following citation:

- Taylor W.R., Protein structure comparison using iterated double dynamic programming. Protein Sci. 8 (1999) 654-665.

- Taylor W.R., Protein structure comparison using SAP. Methods Mol. Biol. 143 (2000) 19-32.

## Install / Uninstall
Please read the general 'INSTALL' instructions.
For documentation execute 'doxygen doxygen.cfg' in the 'src' directory.
Documentation files are created in 'doc/html' and 'doc/latex'.
The latex documentation is completed by executing 'make pdf' in the
'doc/latex' directory, which creates 'refman.ps' and 'refman.pdf'.

## Usage
    sap <PDB_1> <PDB_2>
    sap <PDB_1> <PDB_2> <one2one>

'one2one' is an optional integer value added to the diagonal; any negative value selects the default value of 1000.

## Web Server
http://mathbio.crick.ac.uk/wiki/SAP

## Authorship
* (C) 1999 W.R. Taylor (program author)
* (C) 2007 Alessandro Pandini : SAP web server
* (C) 2007 Jens Kleinjung : code release
* (C) 2008 Siv Hollup : code update to ANSI C standard

## Availability
The program is made available under the GNU Public License for academic
scientific purposes, under the condition that proper acknowledgement
is made to the authors of the program in publications resulting from the use
of the program.

## License
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
