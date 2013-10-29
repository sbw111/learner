class Safearray{
	private:
		int maxn,a[1000];
	public:
		Safearray (int x=100)
		{
			maxn=x; 
		}
		int& operator [] (int n);
		int& operator = (int m);
};