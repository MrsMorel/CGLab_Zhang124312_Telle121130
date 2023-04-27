#include <string>
#include "Node.h"
//TODO make SceneGraph a Singleton (only one scenegraph should be allowed to exist)
class SceneGraph
{
public:
    SceneGraph(std::string name, Node *root);
    virtual ~SceneGraph();

    std::string getName();
    Node *getRoot();
    std::string printGraph();

private:
    std::string name;
    Node *root;
    void setName(std::string name);
    void setRoot(Node *node);
};