# Write your MySQL query statement below
SELECT stock_name, SUM(
  CASE
      WHEN operation ='BUY' THEN -price
      ELSE price
    end
)as capital_gain_loss
from stocks
GROUP BY stock_name



