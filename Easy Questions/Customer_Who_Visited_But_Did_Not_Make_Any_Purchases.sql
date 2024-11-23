SELECT c.customer_id, COUNT(c.visit_id) as count_no_trans
FROM Visits c
LEFT JOIN Transactions t
ON c.visit_id = t.visit_id
WHERE t.transaction_id IS NULL
GROUP BY c.customer_id
