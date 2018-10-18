#include<iostream>
#include<string>
using namespace std;

class ListNode
{
	friend class List;

public:
	ListNode(const char &info) : data(info), a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0), j(0), k(0), l(0), m(0),
		n(0), o(0), p(0), q(0), r(0), s(0), t(0), u(0), v(0), w(0), x(0), y(0), z(0){}
	char getData() const{
		return data;
	}
private:
	char data;
	ListNode *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m, *n, *o, *p, *q, *r, *s, *t, *u, *v, *w, *x, *y, *z;
};

class List
{
private:
	ListNode *firstPtr;
	ListNode *A, *B, *C, *D, *E, *F, *G, *H, *I, *J, *K, *L, *M, *N, *O, *P, *Q, *R, *S, *T, *U, *V, *W, *X, *Y, *Z;


	ListNode *getNewNode(const int &value)
	{
		return new ListNode(value);
	}

public:
	List() : A(0), B(0), C(0), D(0), E(0), F(0), G(0), H(0), I(0), J(0), K(0), L(0), M(0), N(0), O(0), P(0), Q(0),
		R(0), S(0), T(0), U(0), V(0), W(0), X(0), Y(0), Z(0) {}
	//~List(){
	//	if (!isEmpty())
	//	{
	//		cout << "Destroying nodes ...\n";

	//		ListNode *currentPtr = firstPtr;
	//		ListNode *tempPtr;

	//		while (currentPtr != 0)
	//		{
	//			tempPtr = currentPtr;
	//			cout << tempPtr->data << '\n';
	//			currentPtr = currentPtr->next;
	//			delete tempPtr;
	//		}
	//	}

	//	cout << "All nodes destroyed\n\n";
	//}
	void insert(string &value)
	{
		if (value[0] == 'a' || value[0] == 'A')
			A = insertTree(value, A);

		if (value[0] == 'b' || value[0] == 'B')
			B = insertTree(value, B);

		if (value[0] == 'c' || value[0] == 'C')
			C = insertTree(value, C);

		if (value[0] == 'd' || value[0] == 'D')
			D = insertTree(value, D);

		if (value[0] == 'e' || value[0] == 'E')
			E = insertTree(value, E);

		if (value[0] == 'f' || value[0] == 'F')
			F = insertTree(value, F);

		if (value[0] == 'g' || value[0] == 'G')
			G = insertTree(value, G);

		if (value[0] == 'h' || value[0] == 'H')
			H = insertTree(value, H);

		if (value[0] == 'i' || value[0] == 'I')
			I = insertTree(value, I);

		if (value[0] == 'j' || value[0] == 'J')
			J = insertTree(value, J);

		if (value[0] == 'k' || value[0] == 'K')
			K = insertTree(value, K);

		if (value[0] == 'l' || value[0] == 'L')
			L = insertTree(value, L);

		if (value[0] == 'm' || value[0] == 'M')
			M = insertTree(value, M);

		if (value[0] == 'n' || value[0] == 'N')
			N = insertTree(value, N);

		if (value[0] == 'o' || value[0] == 'O')
			O = insertTree(value, O);

		if (value[0] == 'p' || value[0] == 'P')
			P = insertTree(value, P);

		if (value[0] == 'q' || value[0] == 'Q')
			Q = insertTree(value, Q);

		if (value[0] == 'r' || value[0] == 'R')
			R = insertTree(value, R);

		if (value[0] == 's' || value[0] == 'S')
			S = insertTree(value, S);

		if (value[0] == 't' || value[0] == 'T')
			T = insertTree(value, T);

		if (value[0] == 'u' || value[0] == 'U')
			U = insertTree(value, U);

		if (value[0] == 'v' || value[0] == 'V')
			V = insertTree(value, V);

		if (value[0] == 'w' || value[0] == 'W')
			W = insertTree(value, W);

		if (value[0] == 'x' || value[0] == 'X')
			X = insertTree(value, X);

		if (value[0] == 'y' || value[0] == 'Y')
			Y = insertTree(value, Y);

		if (value[0] == 'z' || value[0] == 'Z')
			Z = insertTree(value, Z);

	}

	ListNode * insertTree(string &value, ListNode *temp)
	{
		ListNode* current = 0;
		for (int i = 0; i < value.size(); i++)
		{
			ListNode *newPtr = getNewNode(value[i]);
			if (temp == 0)
			{
				current = temp = newPtr;
				continue;
			}
			else
			{
				if (i == 0)
				{
					current = temp;
					continue;
				}
				if (newPtr->data == 'A' || newPtr->data == 'a')
				{
					if (current->a == 0)
					{
						current->a = newPtr;
						current = current->a;
						continue;

					}
					else
					{
						current = current->a;
						continue;
					}
				}

				if (newPtr->data == 'B' || newPtr->data == 'b')
				{
					if (current->b == 0)
					{
						current->b = newPtr;
						current = current->b;
						continue;

					}
					else
					{
						current = current->b;
						continue;
					}
				}

				if (newPtr->data == 'C' || newPtr->data == 'c')
				{
					if (current->c == 0)
					{
						current->c = newPtr;
						current = current->c;
						continue;

					}
					else
					{
						current = current->c;
						continue;
					}
				}

				if (newPtr->data == 'D' || newPtr->data == 'd')
				{
					if (current->d == 0)
					{
						current->d = newPtr;
						current = current->d;
						continue;

					}
					else
					{
						current = current->d;
						continue;
					}
				}
				if (newPtr->data == 'E' || newPtr->data == 'e')
				{
					if (current->e == 0)
					{
						current->e = newPtr;
						current = current->e;
						continue;

					}
					else
					{
						current = current->e;
						continue;
					}
				}
				if (newPtr->data == 'F' || newPtr->data == 'f')
				{
					if (current->f == 0)
					{
						current->f = newPtr;
						current = current->f;
						continue;

					}
					else
					{
						current = current->f;
						continue;
					}
				}
				if (newPtr->data == 'G' || newPtr->data == 'g')
				{
					if (current->g == 0)
					{
						current->g = newPtr;
						current = current->g;
						continue;

					}
					else
					{
						current = current->g;
						continue;
					}
				}
				if (newPtr->data == 'H' || newPtr->data == 'h')
				{
					if (current->h == 0)
					{
						current->h = newPtr;
						current = current->h;
						continue;

					}
					else
					{
						current = current->h;
						continue;
					}
				}
				if (newPtr->data == 'I' || newPtr->data == 'i')
				{
					if (current->i == 0)
					{
						current->i = newPtr;
						current = current->i;
						continue;

					}
					else
					{
						current = current->i;
						continue;
					}
				}
				if (newPtr->data == 'J' || newPtr->data == 'j')
				{
					if (current->j == 0)
					{
						current->j = newPtr;
						current = current->j;
						continue;

					}
					else
					{
						current = current->j;
						continue;
					}
				}
				if (newPtr->data == 'K' || newPtr->data == 'k')
				{
					if (current->k == 0)
					{
						current->k = newPtr;
						current = current->k;
						continue;

					}
					else
					{
						current = current->k;
						continue;
					}
				}
				if (newPtr->data == 'L' || newPtr->data == 'l')
				{
					if (current->l == 0)
					{
						current->l = newPtr;
						current = current->l;
						continue;

					}
					else
					{
						current = current->l;
						continue;
					}
				}
				if (newPtr->data == 'M' || newPtr->data == 'm')
				{
					if (current->m == 0)
					{
						current->m = newPtr;
						current = current->m;
						continue;

					}
					else
					{
						current = current->m;
						continue;
					}
				}
				if (newPtr->data == 'N' || newPtr->data == 'n')
				{
					if (current->n == 0)
					{
						current->n = newPtr;
						current = current->n;
						continue;

					}
					else
					{
						current = current->n;
						continue;
					}
				}
				if (newPtr->data == 'O' || newPtr->data == 'o')
				{
					if (current->o == 0)
					{
						current->o = newPtr;
						current = current->o;
						continue;

					}
					else
					{
						current = current->o;
						continue;
					}
				}
				if (newPtr->data == 'P' || newPtr->data == 'p')
				{
					if (current->p == 0)
					{
						current->p = newPtr;
						current = current->p;
						continue;

					}
					else
					{
						current = current->p;
						continue;
					}
				}
				if (newPtr->data == 'Q' || newPtr->data == 'q')
				{
					if (current->q == 0)
					{
						current->q = newPtr;
						current = current->q;
						continue;

					}
					else
					{
						current = current->q;
						continue;
					}
				}
				if (newPtr->data == 'R' || newPtr->data == 'r')
				{
					if (current->r == 0)
					{
						current->r = newPtr;
						current = current->r;
						continue;

					}
					else
					{
						current = current->r;
						continue;
					}
				}
				if (newPtr->data == 'S' || newPtr->data == 's')
				{
					if (current->s == 0)
					{
						current->s = newPtr;
						current = current->s;
						continue;

					}
					else
					{
						current = current->s;
						continue;
					}
				}
				if (newPtr->data == 'T' || newPtr->data == 't')
				{
					if (current->t == 0)
					{
						current->t = newPtr;
						current = current->t;
						continue;

					}
					else
					{
						current = current->t;
						continue;
					}
				}
				if (newPtr->data == 'U' || newPtr->data == 'u')
				{
					if (current->u == 0)
					{
						current->u = newPtr;
						current = current->u;
						continue;

					}
					else
					{
						current = current->u;
						continue;
					}
				}
				if (newPtr->data == 'V' || newPtr->data == 'v')
				{
					if (current->v == 0)
					{
						current->v = newPtr;
						current = current->v;
						continue;

					}
					else
					{
						current = current->v;
						continue;
					}
				}
				if (newPtr->data == 'W' || newPtr->data == 'w')
				{
					if (current->w == 0)
					{
						current->w = newPtr;
						current = current->w;
						continue;

					}
					else
					{
						current = current->w;
						continue;
					}
				}
				if (newPtr->data == 'X' || newPtr->data == 'x')
				{
					if (current->x == 0)
					{
						current->x = newPtr;
						current = current->x;
						continue;

					}
					else
					{
						current = current->x;
						continue;
					}
				}
				if (newPtr->data == 'Y' || newPtr->data == 'y')
				{
					if (current->y == 0)
					{
						current->y = newPtr;
						current = current->y;
						continue;

					}
					else
					{
						current = current->y;
						continue;
					}
				}
				if (newPtr->data == 'Z' || newPtr->data == 'z')
				{
					if (current->z == 0)
					{
						current->z = newPtr;
						current = current->z;
						continue;

					}
					else
					{
						current = current->z;
						continue;
					}
				}

			}
		}
		return temp;
	}

	bool search(string &value)
	{
		bool finded = false;
		if (value[0] == 'a' || value[0] == 'A')
		if (A)
			finded = findWord(value, A);

		if (value[0] == 'b' || value[0] == 'B')
		if (B)
			finded = findWord(value, B);

		if (value[0] == 'c' || value[0] == 'C')
		if (C)
			finded = findWord(value, C);

		if (value[0] == 'd' || value[0] == 'D')
		if (D)
			finded = findWord(value, D);

		if (value[0] == 'e' || value[0] == 'E')
		if (E)
			finded = findWord(value, E);

		if (value[0] == 'f' || value[0] == 'F')
		if (F)
			finded = findWord(value, F);

		if (value[0] == 'g' || value[0] == 'G')
		if (G)
			finded = findWord(value, G);

		if (value[0] == 'h' || value[0] == 'H')
		if (H)
			finded = findWord(value, H);

		if (value[0] == 'i' || value[0] == 'I')
		if (I)
			finded = findWord(value, I);

		if (value[0] == 'j' || value[0] == 'J')
		if (J)
			finded = findWord(value, J);

		if (value[0] == 'k' || value[0] == 'K')
		if (K)
			finded = findWord(value, K);

		if (value[0] == 'l' || value[0] == 'L')
		if (L)
			finded = findWord(value, L);

		if (value[0] == 'm' || value[0] == 'M')
		if (M)
			finded = findWord(value, M);

		if (value[0] == 'n' || value[0] == 'N')
		if (N)
			finded = findWord(value, N);

		if (value[0] == 'o' || value[0] == 'O')
		if (O)
			finded = findWord(value, O);

		if (value[0] == 'p' || value[0] == 'P')
		if (P)
			finded = findWord(value, P);

		if (value[0] == 'q' || value[0] == 'Q')
		if (Q)
			finded = findWord(value, Q);

		if (value[0] == 'r' || value[0] == 'R')
		if (R)
			finded = findWord(value, R);

		if (value[0] == 's' || value[0] == 'S')
		if (S)
			finded = findWord(value, S);

		if (value[0] == 't' || value[0] == 'T')
		if (T)
			finded = findWord(value, T);

		if (value[0] == 'u' || value[0] == 'U')
		if (U)
			finded = findWord(value, U);

		if (value[0] == 'v' || value[0] == 'V')
		if (V)
			finded = findWord(value, V);

		if (value[0] == 'w' || value[0] == 'W')
		if (W)
			finded = findWord(value, W);

		if (value[0] == 'x' || value[0] == 'X')
		if (X)
			finded = findWord(value, X);

		if (value[0] == 'y' || value[0] == 'Y')
		if (Y)
			finded = findWord(value, Y);

		if (value[0] == 'z' || value[0] == 'Z')
		if (Z)
			finded = findWord(value, Z);

		return finded;
	}

	bool findWord(string &value, ListNode *temp)
	{
		bool find = true;
		ListNode* current = temp;
		for (int i = 1; i < value.size(); i++)
		{
			if (value[i] == 'A' || value[i] == 'a')
			{
				if (current->a)
				{
					current = current->a;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'B' || value[i] == 'b')
			{
				if (current->b)
				{
					current = current->b;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'C' || value[i] == 'c')
			{
				if (current->c)
				{
					current = current->c;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'D' || value[i] == 'd')
			{
				if (current->d)
				{
					current = current->d;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'E' || value[i] == 'e')
			{
				if (current->e)
				{
					current = current->e;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'F' || value[i] == 'f')
			{
				if (current->f)
				{
					current = current->f;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'G' || value[i] == 'g')
			{
				if (current->g)
				{
					current = current->g;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'H' || value[i] == 'h')
			{
				if (current->h)
				{
					current = current->h;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'I' || value[i] == 'i')
			{
				if (current->i)
				{
					current = current->i;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'J' || value[i] == 'j')
			{
				if (current->j)
				{
					current = current->j;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'K' || value[i] == 'k')
			{
				if (current->k)
				{
					current = current->k;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'L' || value[i] == 'l')
			{
				if (current->l)
				{
					current = current->l;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'M' || value[i] == 'm')
			{
				if (current->m)
				{
					current = current->m;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'N' || value[i] == 'n')
			{
				if (current->n)
				{
					current = current->n;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'O' || value[i] == 'o')
			{
				if (current->o)
				{
					current = current->o;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'P' || value[i] == 'p')
			{
				if (current->p)
				{
					current = current->p;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'Q' || value[i] == 'q')
			{
				if (current->q)
				{
					current = current->q;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'R' || value[i] == 'r')
			{
				if (current->r)
				{
					current = current->r;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'S' || value[i] == 's')
			{
				if (current->s)
				{
					current = current->s;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'T' || value[i] == 't')
			{
				if (current->t)
				{
					current = current->t;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'U' || value[i] == 'u')
			{
				if (current->u)
				{
					current = current->u;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'V' || value[i] == 'v')
			{
				if (current->v)
				{
					current = current->v;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'W' || value[i] == 'w')
			{
				if (current->w)
				{
					current = current->w;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'X' || value[i] == 'x')
			{
				if (current->x)
				{
					current = current->x;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'Y' || value[i] == 'y')
			{
				if (current->y)
				{
					current = current->y;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

			if (value[i] == 'Z' || value[i] == 'z')
			{
				if (current->z)
				{
					current = current->z;
					continue;

				}
				else
				{
					find = false;
					break;
				}
			}

		}
		return find;
	}


	//void print() const{
	//	if (isEmpty())
	//	{
	//		cout << "The list is empty\n\n";
	//		return;
	//	}

	//	ListNode *currentPtr = firstPtr;

	//	cout << "The list is: ";

	//	while (currentPtr != 0)
	//	{
	//		cout << currentPtr->data << ' ';
	//		currentPtr = currentPtr->next;
	//	}

	//	cout << "\n\n";
	//}








};
