class fun{
	private:
		int maxn,a[1000];
	public:
		int len;
		fun (int x=100)
		{
			maxn=x; len=0;
		}
		bool add(int num);
		void pri();
};