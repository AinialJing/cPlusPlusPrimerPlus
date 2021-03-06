#ifndef __DEFINESTOCKCLASS__H__
#define __DEFINESTOCKCLASS__H__

#include <string>
using namespace std;
class Stock{
  private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot(){
	 total_val=shares*share_val;
	}

    public:
	~Stock();
	void acquire(const string &co,long n,double pr);
	//购买股票
	void buy(long num,double price);
	//卖出股票
	void sell(long num,double price);
	//更新股票价格
	void update(double price);
        //展示股票信息
	void show();



};
#endif
