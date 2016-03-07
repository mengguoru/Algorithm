# print N files in specific folder sorted by size.
# author:mengguoru
# data:2016/01/10

# $1:/path/files
# $2:number(of files you want to output )

ls -1Sl $1 |head -n $(($2+1))