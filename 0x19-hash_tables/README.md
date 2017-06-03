0-hash_table_create.c
1-djb2.c
2-key_index.c
3-hash_table_set.c
4-hash_table_get.c
5-hash_table_print.c
6-hash_table_delete.c
	<li>
	<li>
	<li>
	<li>
	<li>
	<li>
	<li>
	<li>
	<li>
	<li>
	<li>
	<li>
	      <li>
	      <li>
	      <li>
	      <li>
	      <li>
	      <li>
	      <li>
	      <li>
	      <li>
	      <li>
	      <li>
	      <li>
		  <li><a rel="nofollow" data-method="delete" href="/auth/sign_out">Log out</a></li>
	<p>
	<p>
	<p>
	<p>
	  <p>Watch <a href="https://www.youtube.com/watch?v=MfhjkfocRR0">What is a HashTable Data Structure - Introduction to Hash Tables , Part 0</a> and read <a href="https://en.wikipedia.org/wiki/Hash_function">Hash function</a>, <a href="https://en.wikipedia.org/wiki/Hash_table">Hash table</a> and <a href="http://www.cse.yorku.ca/%7Eoz/hash.html">Hash Functions</a>.</p>
	  <p>At the end of this project you are expected to be able to explain to anyone, without the help of Google:</p>
	    <li>What is a hash function</li>
	    <li>What makes a good hash function</li>
	    <li>What is a hash table, how do they work and how to use them</li>
	    <li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
	    <li>What are the advantages and drawbacks of using hash tables</li>
	    <li>What are the most common use cases of hash tables</li>
	    <li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
	    <li>All your files will be compiled on Ubuntu 14.04 LTS</li>
	    <li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> (<code>C90</code>) using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> <code>and -pedantic</code></li>
	    <li>All your files should end with a new line</li>
	    <li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
	    <li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl">betty-doc.pl</a></li>
	    <li>You are not allowed to use global variables</li>
	    <li>No more than 5 functions per file</li>
	    <li>You are allowed to use the C standard library</li>
	    <li>The prototypes of all your functions should be included in your header file called <code>hash_tables.h</code></li>
	    <li>Don&#39;t forget to push your header file</li>
	    <li>All your header files should be include guarded</li>
	    <li>Please use those data structures for this project:</li>
	    <li>We strongly encourage you to work all together on a set of tests</li>
	  <p>Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type <code>d = {&#39;a&#39;: 1, &#39;b&#39;: 2}</code>, but everything looks so simple for the user. Python doesn&#39;t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about <a href="http://www.laurentluce.com/posts/python-dictionary-implementation/">how dictionaries are implemented in Python 2.7</a> (not mandatory).</p>
	  <p>Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. <a href="http://stackoverflow.com/questions/2061222/what-is-the-true-difference-between-a-dictionary-and-a-hash-table">Read more here</a> (not mandatory).</p>
	      <p>Write a function that creates a hash table.</p>
		<li>Prototype: <code>hash_table_t *hash_table_create(unsigned long int size);</code>
		    <li>where <code>size</code> is the size of the array</li>
		<li>Returns a pointer to the newly created hash table</li>
		<li>If something went wrong, your function should return <code>NULL</code></li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>0-hash_table_create.c</code></li>
	      <p>Write a hash function implementing the djb2 algorithm.</p>
		<li>Prototype: <code>unsigned long int hash_djb2(const unsigned char *str);</code></li>
		<li>You are allowed to copy and paste the function from <a href="http://www.cse.yorku.ca/%7Eoz/hash.html">this page</a></li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>1-djb2.c</code></li>
	      <p>Write a function that gives you the index of a key.</p>
		<li>Prototype: <code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code>
		    <li>where <code>key</code> is the key</li>
		    <li>and <code>size</code> is the size of the array of the hash table</li>
		<li>This function should use the <code>hash_djb2</code> function that you wrote earlier</li>
		<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
		<li>You will have to use this hash function for all the next tasks</li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>2-key_index.c</code></li>
	      <p>Write a function that adds an element to the hash table.</p>
		<li>Prototype: <code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code>
		    <li>Where <code>ht</code> is the hash table you want to add or update the key/value to</li>
		    <li><code>key</code> is the key. <code>key</code> can not be an empty string</li>
		    <li>and <code>value</code> is the value associated with the key. <code>value</code> can be an empty string</li>
		<li>Returns: <code>1</code> if it succeeded, <code>0</code> otherwise</li>
		<li>In case of collision, add the new node at the beginning of the list</li>
	      <p><em>Tip from <a href="https://twitter.com/JennieZChu">Jennie</a></em>: if you want to test for collisions, here are some strings that collide using the djb2 algorithm:</p>
		<li>hetairas collides with mentioner</li>
		<li>heliotropes collides with neurospora</li>
		<li>depravement collides with serafins</li>
		<li>stylist collides with subgenera</li>
		<li>joyful collides with synaphea</li>
		<li>redescribed collides with urites</li>
		<li>dram collides with vivency</li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>3-hash_table_set.c</code></li>
	      <p>Write a function that retrieves a value associated with a key.</p>
		<li>Prototype: <code>char *hash_table_get(const hash_table_t *ht, const char *key);</code>
		    <li>where <code>ht</code> is the hash table you want to look into</li>
		    <li>and <code>key</code> is the key you are looking for</li>
		<li>Returns the value associated with the element, or <code>NULL</code> if <code>key</code> couldn&#39;t be found</li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>4-hash_table_get.c</code></li>
	      <p>Write a function that prints a hash table.</p>
		<li>Prototype: <code>void hash_table_print(const hash_table_t *ht);</code>
		    <li>where <code>ht</code> is the hash table</li>
		<li>You should print the key/value in the order that they appear in the array of hash table
		    <li>Order: array, list</li>
		<li>Format: see example</li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>5-hash_table_print.c</code></li>
	      <p>Write a function that deletes a hash table.</p>
		<li>Prototype: <code>void hash_table_delete(hash_table_t *ht);</code>
		    <li>where <code>ht</code> is the hash table</li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>6-hash_table_delete.c</code></li>
