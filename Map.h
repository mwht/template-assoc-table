#ifndef __Map_h_
#define __Map_h_

template <class Tkey,class Tvalue> class Map {
	private:
		struct node {
			node* next;
			Tkey key;
			Tvalue val;
			node() {
				next = NULL;
				key = NULL;
				val = NULL;
			}
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
		}
		Tvalue* Find(Tkey key) {
			node* current = head;
			while(current) {
				if(current->key == key) return &current;
				current = current->next;
			}
			return NULL;
		}
		
};

#endif // __Map_h_
