<h2><a href="https://www.geeksforgeeks.org/problems/binary-tree-to-dll/1">Binary Tree to DLL</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p dir="ltr"><span style="font-size: 14pt;">Given the <strong>root </strong>of a binary tree, convert it to a Doubly Linked List (DLL) in place, using the same node structure.</span></p>
<ul>
<li dir="ltr"><span style="font-size: 14pt;">The left and right pointers in the binary tree nodes should be used as prev and next pointers respectively in the resulting DLL.</span></li>
<li dir="ltr"><span style="font-size: 14pt;">The DLL should be formed by performing an inorder traversal of the binary tree (i.e., Left -&gt; Root -&gt; Right).</span></li>
<li dir="ltr"><span style="font-size: 14pt;">The first node in the inorder traversal (i.e., the leftmost node) should become the head of the DLL.</span></li>
</ul>
<p dir="ltr"><span style="font-size: 14pt;">Return the head of the resulting DLL.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root<strong> = </strong>[1, 2, 3]
<strong>Output: <br></strong>2 1 3<br>3 1 2<br><strong>Explanation: </strong>Inorder traversal visits 2, 1, 3. Node 2 becomes the head of the DLL, giving the list 2 &lt;=&gt; 1 &lt;=&gt; 3.<strong><br></strong><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700144/Web/Other/blobid3_1768475771.jpg" width="213" height="211"><br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root = [10, 20, 30, 40, 60]
<strong>Output:</strong> <br><span class="GFGEditorTheme__textItalic">40 20 60 10 30 
30 10 60 20 40 
<strong>Explanation: </strong>Inorder traversal visits 40, 20, 60, 10, 30. Node 40 becomes the head of the DLL, giving the list 40 &lt;=&gt; 20 &lt;=&gt; 60 &lt;=&gt; 10 &lt;=&gt; 30<em>.</em></span><br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700144/Web/Other/blobid2_1763203489.webp" width="311" height="245"><strong><br></strong></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ number of nodes ≤ 10<sup>6</sup><br>0 ≤ node-&gt;data ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Morgan Stanley</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>Salesforce</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Tree</code>&nbsp;