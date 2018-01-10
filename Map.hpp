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
			node() { next = NULL; }
			node(const node& n) {
				key = n.key;
				val = n.val;
				next = NULL;
			}
		};
		node* head;
		void Clear() {
			node* current = head, *nextElem;
			while(current) {
				nextElem = current->next;
				delete current;
				current = nextElem;
			}
		}
		void Copy(const Map& m) {
			node* src = m.head;
			head = NULL;
			while(src) {
				Add(src->key,src->val);
				src = src->next;
			}
		}
	public:
		Map() {
			head = NULL;
		}
		~Map() {
			Clear();
		}
		Map(const Map& m) {
			Copy(m);
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
		Map& operator=(const Map<class a,class b> & m) {
			Map<a,b> newMap;
			newMap.Copy(m);
			return newMap;
		}
};

#endif // __Map_hpp_
