# A C++ library for json objects

### This library uses recursion to build JSON objects

### Supported types are : Strings, Double, Arrays, and Nested Objects

### Each object hold a TYPE enum, that determines which of the 4 member fields to use:

`ARRAY` `DOUBLE` `STRING` `OBJECT`

```cpp
// Create an object from a JSON.Stringify result
Json::JsonObject fromStringify(stringified);
Json::JsonObject obj("{\"key\": [\"value1\",\"value2\",\"value3\"]}");
std::cout<<obj;
// output:
{
  "key": [
    "value1",
    "value2",
    "value3"
  ]
}

// Create a string instance
Json::JsonObject stringInstance(TYPE::STRING, stringValue);

// Create a double instance
Json::JsonObject doubleInstance(doubleValue);

// Create an array
// Initialize an object then repeatedly push_back JsonObject elements into it
Json::JsonObject arrayInstance(Json::TYPE::ARRAY);
for (double value : valueList){
  arrayInstance.push_back(Json::JsonObject(value));
}


// Retreive value at index or key
Json::JsonObject item = arrayInstance[0];
Json::JsonObject item = objectInstance["key"];

// Create a json with key values: initialize json object and assign key value pairs
Json::JsonObject objectInstance;
objectInstance["key0"] = Json::JsonObject(TYPE::STRING,"value0");  // string constructor
objectInstance["key1"] = Json::JsonObject(1000);                   // double constructor
objectInstance["key2"] = Json::JsonObject("{\"key\": \"value2\""); // stringify constructor


// get the object instance type:
std::string itemType = itemInstance.type();

// get string value:
std::string stringValue = itemInstance.string_value();
// get double value:
double doubleValue      = itemInstance.double_value();
// get array value:
std::vector<Json::JsonObject> itemList = itemInstance.array_value();
// to access the key value pairs, just use the key accessors mentioned above

// print out the object (formatted to be 2 space-tabbed)
std::cout<<itemInstance;
```
