file=$1
filename="${file%.*}" # https://stackoverflow.com/a/965072
g++ ./$file -o ./$filename.exe
./$filename.exe
if [ $2="-" ]
then
    rm ./$filename.exe
else
    echo "Not removing ./$filename.exe"
fi