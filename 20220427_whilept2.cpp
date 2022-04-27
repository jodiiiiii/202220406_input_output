using namespace std;
int main(){
    
    //menambahkan batas bawah
    //menambahkan batas batas
    //namun batas bawah tidak boleh lebih dari batas batas
    int batasbawah, batasatas;
    cout<<"Masukan Batas Bawah";cin>>batasbawah;
    cout<<"Masukan Batas Atas";cin>>batasatas;
    
    if (batasbawah < batasatas){
    while (batasbawah++ <batasatas){
        cout<<"Data ke - "<<batasbawah<<endl;
    }
}
else{
    cout<<"Batas Bawah tidak boleh lebih dari batasatas";
}
    return 0;
}
