# pipex
The purpose of this project is the discovery in detail UNIX mechanism - pipe.

Discription of mandatory part
The program pipex should repeat the behaviour of the next shell command
$> < file1 cmd1 | cmd2 > file2
and looks like this:

$> ./pipex file1 cmd1 cmd2 file2
All errors like: wrong commands, permission to files and etc, need be handle.

Discription of bonus part
Program need handle multiple pipes

$> < file1 cmd1 | cmd2 | cmd3 | ... | cmdn > file2

$> ./pipex file1 cmd1 cmd2 cmd3 ... cmdn file2
Support << and >>, when instead of file1 ishere_doc.

$> cmd1 << LIMITER | cmd2 >> file2

$> ./pipex here_doc LIMITER cmd1 cmd2 file2
