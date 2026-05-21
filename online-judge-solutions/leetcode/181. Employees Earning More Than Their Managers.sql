SELECT EMP.name AS Employee
FROM Employee AS EMP, Employee AS MGR
WHERE EMP.managerId = MGR.id AND EMP.salary > MGR.salary