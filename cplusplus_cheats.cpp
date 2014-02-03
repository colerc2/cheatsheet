//read file and store each line in a vector of strings
void read_file_to_vector(std::vector<std::string> &lines, std::string filename){
  std::string item;
  std::fstream file(filename.c_str());
  while(std::getline(file, item)){
    //find and erase '\r' char used in windows, most painful bug ever
    if(std::find(item.begin(), item.end(), '\r') != item.end()){
      item.erase(std::find(item.begin(), item.end(), '\r'));
    }
    lines.push_back(std::string(item));
  }
}

//split a string by a specified delimiter into a vector of doubles
void split_to_double(const std::string &s, char delim, std::vector<double> &elements){
  std::stringstream ss(s);
  std::string item;
  while(std::getline(ss,item,delim)){
    elements.push_back(atof(item.c_str()));
  }
}


//parse a given string by a specified delimiter and store in a string vector
void split_to_string(const std::string &s, char delim, std::vector<std::string> &elements){
  std::stringstream ss(s);
  std::string item;
  while(std::getline(ss,item,delim)){
    elements.push_back(item);
  }
}
