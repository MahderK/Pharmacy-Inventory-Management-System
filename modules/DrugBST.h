#ifndef DRUGBST_H
#define DRUGBST_H
#include <string>
using namespace std;

struct Drug
{
    int id;
    string name;
    Drug *left;
    Drug *right;
    int quantity;
    string catagory;
    string expiryDate;
    Drug(string n, int i, int quan, string expiry); // automatically initiallizes the res
};

class DrugBST
{
private:
    Drug *root;
    Drug *insert(Drug *node, string name, int id, int quantity, string expiry);
    bool searchByName(Drug *node, string name);
    bool searchById(Drug *node, int id);
    void inorder(Drug *node);

public:
    DrugBST();
    void addDrug(string name, int id, int quantity, string expiryDate);
    void findDrugName(string name);
    void findDrugId(int id);
    void discard(string expiry);
    void displayDrugs();
};

#endif