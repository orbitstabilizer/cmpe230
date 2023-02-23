### !!! DONT RUN THIS FILE DIRECTLY !!!

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
#emacs file.txt # edit file in emacs
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

g++ # compile c++ program
gcc # compile c program

grep "pattern" file.txt # search for pattern in file.txt

gunzip file.gz # uncompress file.gz
gzip file.txt # compress file.txt

history # print history of commands
# use up and down arrows to navigate through history

!n # execute command number n from history

kill -9 1234 # kill process with pid 1234
ps # list processes

last # users last logged in

lscpu # list cpu info


make # for compiling files !! more on this later !!

more # display file page by page
less # display file page by page

mount # mount file system
mv file1 file2 # move file1 to file2 , this is like renaming
nslookup # name server lookup
    > www.cmpe.boun.edu.tr

passwd # change password

ping # emrah y.

pushd # push directory
popd # pop directory

rpm # red hat package manager
    > rpm -i package.rpm # install package
    > rpm -e package.rpm # remove package

ftp # file transfer protocol
    # this is not secure, use sftp instead
    
ssh remote_user@remote_ip # login to remove machine

source file.sh # execute file.sh
tar cvf file.tar file1 file2 # create tar file, packs the files but 
                                # does not compress
tar xvf file.tar # extract tar file, unpacks the files
gzip file.tar # compress packed tar files
    # output is file.tar.gz
gunzip file.tar.gz # uncompress packed tar files
tar xvfz file.tar.gz # extract compressed tar file

prog.exe | tee file.txt # redirect output of prog.exe to file.txt
    # and also print it to terminal

typescript # print terminal output, save it to a file
    # use this to save terminal output to a file
    # use this to print terminal output to terminal

w # who is logged in
wc file.txt # word count 
            # prints number of lines, words, characters in file.txt
ls -l  # list files with details

yum # yellow dog updater, modified version of rpm
    > yum install package_name # install package
    > yum remove package_name # remove package

wget # web get, save files from web,options -c, -r, -p
    > wget -c http://www.cmpe.boun.edu.tr/file.txt # continue download
    > wget -r http://www.cmpe.boun.edu.tr # download recursively
    > wget -p http://www.cmpe.boun.edu.tr # download web page and all 
                                            # resources
                                            #
who # who is logged in
whoami # print current user









