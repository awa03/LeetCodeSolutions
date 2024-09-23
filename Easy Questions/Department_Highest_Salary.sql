SELECT dp.name AS Department, em.name AS Employee, em.salary
FROM Employee as em JOIN Department AS dp
ON em.departmentId = dp.id
WHERE em.salary = (
    SELECT max(salary) FROM Employee
    WHERE departmentId = dp.id
);
