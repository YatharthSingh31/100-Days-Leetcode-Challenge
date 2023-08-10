SELECT a.customer_id,  count(a.visit_id) AS count_no_trans
FROM Visits AS a
LEFT JOIN Transactions AS b ON a.visit_id = b.visit_id
where b.transaction_id is null  group by a.customer_id