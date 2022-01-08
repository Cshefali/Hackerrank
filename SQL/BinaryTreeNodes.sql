SELECT CASE
    WHEN P IS NULL THEN CONCAT(N,' Root')
    WHEN N IN (SELECT DISTINCT P FROM BST) THEN CONCAT(N,' Inner')
    ELSE CONCAT(N,' Leaf')
END
FROM BST
ORDER BY N;
/*Given BST table contains 2 columns- N and P which correspond to 2 nodes.
Objective is to identify the type of node 'N' as 1. Root 2.Leaf 3. Inner.*/
