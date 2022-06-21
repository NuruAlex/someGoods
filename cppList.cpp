template<typename K>
class list
{
	
	template<typename T>
	class Node 
	{
	public:
		T data;
		Node<T>* next;

		Node(T data = T(), Node<T>* next = nullptr):data(data),next(next)
		{}

	};

	int Size;
	Node<K>* head;

public:

	list():Size(0),head(nullptr)
	{}


	void print()
	{

		if (head != nullptr)
		{

			Node<K>* current = this->head;

			for (int i = 0; i < this->size(); i++)
			{
				if (current != nullptr) 
				{
					std::cout << current->data << " ";

					current = current->next;

				}
			}
			std::cout << "\n";
		}
	}




	int size()
	{
		return Size;
	}

	K& operator [](int index)
	{
		int count = 0;
		Node<K>* current = this->head;


		while (current->next != nullptr)
		{

			if (count == index)
			{
				return current->data;
			}

			current = current->next;

			count++;
		}
	}



	
	void push_back(K data)
	{

		if (head == nullptr)
		{
			head = new Node<K>(data);
		}
		else
		{
			Node<K>* current = this->head;

			while (current->next != nullptr)
			{
				current = current->next;
			}
			

			current->next = new Node<K>(data);

		}

		Size++;

	}

	void push_front(K data) 
	{
		head = new Node<K>(data, head);
		Size++;
	}

	void insert(K data, int index) {
		if (index == 0)
		{
			push_front(data);
		}
		else 
		{
			Node<K>* previous = this->head;

			for (int i = 0; i < index - 1; i++)
			{
				previous = previous->next;
			}


			previous->next = new Node<K>(data, previous->next);

		}
		Size++;
	}

	
	void pop_front()
	{
		Node<K>* to_delete = this->head;

		head = head->next;

		delete to_delete;

		Size--;
	}

	void clear() 
	{
		while (Size) 
		{
			pop_front();
		}
	}

	void removeAt(int index)
	{
		if (index == 0) 
		{
			pop_front();
		}
		else
		{
			Node<K>* previous = this->head;

			for (int i = 0; i < index - 1; i++)
			{
				previous = previous->next;
			}
			
			Node<K>* to_delete = previous->next;

			previous->next = to_delete->next;

			delete to_delete;
		}
		Size--;
	}

	~list() 
	{
		clear(); 
	}
};
