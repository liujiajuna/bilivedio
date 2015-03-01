#include<string>
#include<vector>

class VideoFolder {
public:
	/*
	 *fullpath()
	 *vedio()
	 *title()
	 *completed()
	 *size()
	 */
	const std::string& fullpath(){return _fullpath;};
	const std::vector<std::string>& vedio(){return _vediopath;};
	const std::string& title(){return _title;};
	bool completed(){return _completed;};
	unsigned int size(){return _size;};
	//construct
	VideoFolder(const std::string&);
private:
	std::string _fullpath;
	std::vector<std::string> _vediopath;
	std::string _title;
	bool _completed;
	unsigned int _size;

};