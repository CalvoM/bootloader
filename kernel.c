void dummy(){

}
void main(){
    char *video_mem = (char *)0xb8000;
    *video_mem = 'M';
    while(1);
}