

Class abcd{
	private:
		int a;
	public:
		friend abcd add ();
		void get(){
			cout << “enter a :”<<endl;
			cin >> a;
		}
		void disp(){ 			cout << a ;
};

abcd add(abcd b, abcd a){
	abcd d;
	d.a = a.a+ b.a;
	return d;
}

Int main(){
	abcd a, b, c;
	a.get();
	b.get();
	c=add(a,b);
	c.disp();
	return 0;
}
	
	
	
    