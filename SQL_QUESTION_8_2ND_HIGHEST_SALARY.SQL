https://www.codingninjas.com/codestudio/problems/second-highest-salary_2110760?leftPanelTab=0
select salary
from Employee
order by Salary desc
limit 1 offset 1;
