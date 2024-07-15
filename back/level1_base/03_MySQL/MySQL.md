11 chapter
    1.add data
        add data one by one
            INSERT INTO tablename VALUES (according the order)
        add data use variables
            INSERT INTO tablename (var1, var2, var) VALUES (accorrding the var)
        add more data
            INSERT INTO tablename VALUES
                (),
                (),
                ();

    2.add the search result to the table
        INSERT INTO table1()
        SELCET somethings FROM TABLE2 (conditions);
    
    3.update data
        UPDATE table
        SET var1= newdata1, var2 = newdata2,,,,,
        (WHERE condition)

    4.delete data
        DELETE FROM tabel
        WHETE conditon;
    
    5.calculate row (generated alway as (operation) virtual)
        CREATE TABLE emp3(
        a INT,
        b INT,
        c INT GENERATED ALWAYS AS (a + b) VIRTUAL
        );

    6.practice
        1. create database
        2. create table with var
        3. show database
        4. insert value
        5. update
        6. delete
        7. check
https://www.bilibili.com/video/BV1iq4y1u7vj/?p=59&spm_id_from=pageDriver&vd_source=9648f0869149286e0a21aa7ee92db140


