#include <iostream>

#include "./src/JSONObject.cpp"

int main() {
  Json::JsonObject obj("{\"key\": [\"value1\",\"value2\",\"value3\"]}");
  std::cout<<obj;

  return 0;
}