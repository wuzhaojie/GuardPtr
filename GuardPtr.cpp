template <class T>
class GuardPtr
{
	public:
		GuardPtr(T**t):t_(t){}
		~GuardPtr()
		{
			if(*t_! = NULL)
			{
				delete *t_;
				*t_ = NULL;
			}
		}
	private:
		T**t_;
};

//ʹ��ʾ��
uv_work_t req = new uv_work_t();
GuardPtr<uv_work_t> reqgb(&req);