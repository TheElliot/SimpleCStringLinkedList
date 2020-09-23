#include <iostream>

class ListItem {
  private:
    const char* item;
    ListItem* next = NULL;
    
  public:
    
    ListItem(const char *newItem) {
      item = newItem;
      next = NULL;
    }

    ListItem* nextItem() {
      return next;
    }

    const char* view() {
      return item;
    }

};

class LinkedList {

  private:
    ListItem* first_item;
    int list_length;
  
  public:

    LinkedList(const char *newItem) {
      first_item = new ListItem(newItem);
      list_length = 1;
    }

    int length() {
      return list_length;
    }

    void outputLength() {
      std::cout << length() << std::endl;
    }

    void outputList() {
      std::cout << first_item->view() << std::endl;
      ListItem* next_item = first_item->nextItem();
      while (next_item != NULL) {
        std::cout << next_item->view() << std::endl;
        next_item = next_item->nextItem();
      }
    }
};

int main() {
  LinkedList l("sam");
  l.outputList();
  l.outputLength();
}