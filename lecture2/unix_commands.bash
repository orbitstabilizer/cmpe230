
ls . # list curent dir
mkdir TT # make dir named TT
cd TT # change dir
touch test.txt # create file
ls -l # list files with details
man mkdir # manual for mkdir
cd .. # go back to parent dir
#rmdir -r TT # remove dir TT recursively
cd TT
touch test2.txt
cat test.txt # print file
cp test.txt test2.txt # copy file
cat test.txt test2.txt > test2.txt # concatenate files
man cat # manual for cat
cat -e file.o # print file with $ at the end of each line
cat -n file.o # print file with line numbers

chmod 777 test.txt # change permissions for file
chown user_name test.txt # change owner of file
clear # clear screen

cron # create cron job
df  # disk free
du # disk usage
diff file1 file2 # compare files
emacs file.txt # edit file in emacs
export VAR_NAME=VALUE # set environment variable
printenv # print environment variables

# whenever a command is executed in terminal, it
# is searchd through the PATH environment variable
# search is carried sequentialy from left to right
#
# PATH is a list of directories separated by :
#
# to add a directory to PATH, use export
# e.g. export PATH=$PATH:/home/user/new_command_path
#

pwd # print working directory
which cp # print path to cp command

chmod u+rw file.txt # add read and write permissions to user

