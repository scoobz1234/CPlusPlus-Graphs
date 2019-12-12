#include <iostream>



int main()
{
    



}









/**

*************
   Vertex       Each node of the graph.
*************
*************
    Edge        The pathway between two vertices.
*************
*************
   Adjacent     If two vertices are connected by an edge, they are Adjacent.
	 Node
*************
*************
	Degree
	Of the      The number of edges a vertex has connected to it.
	Node
*************
*************
    Path        The sequence of vertices that are required to get to a specific vertex.
*************
*************
   Closed      
    Path        Initial node is the same as a terminal node.
*************
*************
   Simple  
    Path        A closed path in which all other nodes are distinct.
*************
*************
    Cycle		A path in which the start and end vertex is the same, with no repeated paths.
*************
*************
  Connected 
    Graph		A connected graph is the one in which there is a path between each vertex.
*************
*************
  Complete 
   Graph		Each vertex is connected to another, is called a complete graph.
*************
*************
   Weighted 
    Graph		A Positive value assigned to edges.
*************
*************
   Diagraph		A graph in which every edge is associated with a specific direction.
*************


This is an unweighted Undirected Graph.
There are 8 Vertices |v| = 8
There are 8 Edges |e| = 8

A--------------C
 \       ____/ /
  \     /     /
   \___B     /
       |    /
	  /    /   _F
G____/    /   /
       D_/___/
	   |
	   |
  H____|________E


  *:Adjacency Matrix:*

    A  B  C  D  E  F  G  H
   _________________________
 A| 0  1  1  0  0  0  0  0  |
  |							|
 B| 1  0  1  0  0  0  1  0	|
  |							|
 C| 1  1  0  1  0  0  0  0	|
  |							|
 D| 0  0  1  0  1  1  0  1	|
  |							|
 E| 0  0  0  1  0  0  0  0	|
  |							|
 F| 0  0  0  1  0  0  0  0	|
  |							|
 G| 0  1  0  0  0  0  0  0	|
  |							|
 H| 0  0  0  1  1  0  0  0	|
  |_________________________|


  *:Adjacency List:*

   _____          _____          _____         
  |     |		 |     |		|     |		   
  |	 A  |------->|  B  |------->|  C  |------->NULL
  |_____|		 |_____|		|_____|		   

   _____          _____          _____
  |     |		 |     |		|     |
  |	 B  |------->|  B  |------->|  G  |------->NULL
  |_____|		 |_____|		|_____|

   _____          _____         
  |     |		 |     |		
  |	 C  |------->|  B  |------->NULL
  |_____|		 |_____|		

   _____          _____          _____          _____          _____
  |     |		 |     |		|     |		   |     |		  |     |
  |	 D  |------->|  C  |------->|  F  |------->|  E  |------->|  H  |------->NULL
  |_____|		 |_____|		|_____|		   |_____|		  |_____|

   _____          _____          _____
  |     |		 |     |		|     |
  |	 E  |------->|  D  |------->|  H  |------->NULL
  |_____|		 |_____|		|_____|

   _____          _____ 
  |     |		 |     |
  |	 F  |------->|  D  |------->NULL
  |_____|		 |_____|

   _____          _____         
  |     |		 |     |		   
  |	 G  |------->|  B  |------->NULL
  |_____|		 |_____|		   

   _____          _____          _____
  |     |		 |     |		|     |
  |	 H  |------->|  D  |------->|  E  |------->NULL
  |_____|		 |_____|		|_____|
  
  
  
  
  
  */