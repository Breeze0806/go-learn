export GOROOT=/home/breeze/go
export GOPATH=/home/breeze/projects
export PATH=$GOROOT/bin:$PATH
export GOPROXY=https://goproxy.cn,direct
cd cmd
go build -buildmode=c-shared -o join.so
cd ../
gcc main.c -o test ./join.so
