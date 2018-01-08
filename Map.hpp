#ifndef __Map_hpp_
#define __Map_hpp_
#include <iostream>

using namespace std;

template <class Tkey,class Tvalue> class Map {
	private:
		struct node {
			node* next;
			Tkey key;
			Tvalue val;
			node() {}
		};
		node* head;
	public:
		Map() {
			head = NULL;
		}
		void Add(Tkey key,Tvalue val) {
			node* newNode = new node();
			newNode->next = head;
			newNode->key = key;
			newNode->val = val;
			head = newNode;
			//cout << head->val;
		}
		Tvalue* Find(Tkey key) {
			node* current = head;
			while(current) {
				if(current->key == key) return &current->val;
				current = current->next;
			}
			return NULL;
		}
		friend std::ostream& operator<< (std::ostream& out, const Map& m) {
			node* current = m.head;
			while(current) {
				out << current->val;
				current = current->next;
			}
			return out;
		}
		
};

#endif // __Map_hpp_
