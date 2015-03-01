#include<string>
#include<fstream>
#include"VideoFolder.h"

//read date from file "fullpath\1\entry.json"
VideoFolder::VideoFolder(const std::string& fullpath):_fullpath(fullpath),_completed(false),_size(0){
	//if(_fullpath.empty()){/*error empty path!*/}
	std::ifstream isf((_fullpath+"\\1\\entry.json").c_str());//this ifstream not work on chinese path!!!
	//if(!isf){/*error file open fall*/}
	// read date
	std::string temp,date;
	while(isf) {
		isf>>temp;
		date+=temp;
	}
	std::string::size_type pos1;
	//_title
	pos1=date.find("title");
	pos1+=sizeof("title");
	pos1+=2;//for :"
	_title=date.substr(pos1,date.find('"',pos1)-pos1);
	//_completed
	pos1=date.find("is_completed");
	pos1+=sizeof("is_completed");
	pos1+=1;//for :
	if(date[pos1]=='t')
		_completed=true;//default=false
	//_size
	pos1=date.find("\"total_bytes\"");
	pos1+=sizeof("\"total_bytes\"");
	pos1+=4;//for es":
	isf.clear();
	isf.seekg(pos1);
	isf>>_size;
	//_vediopath


}