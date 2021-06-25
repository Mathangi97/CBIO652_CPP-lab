class Peptide
{
    int seq_length;
    string seq;
    public:
    Peptide()
    {
        cout<<"Constructor invoked!"<<"\n";
        cout<<"Enter sequence:";
        cin>>seq;
        cout<<"Enter sequence length: ";
        cin>>seq_length;
        show_pep();
    }
    
    void show_pep()
    {
        cout<<"Sequence:"<<seq<<"\n";
        cout<<"Sequence length: "<<seq_length<<"\n";
    }
    ~Peptide()
    {
        cout<<"Destructor invoked!";
    }

};
int main()
{
    Peptide P;

    return 0;
}