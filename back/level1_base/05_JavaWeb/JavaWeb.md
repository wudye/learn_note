https://www.bilibili.com/video/BV1UN411x7xe/?p=53&spm_id_from=pageDriver&vd_source=9648f0869149286e0a21aa7ee92db140


hr
    The <hr> HTML element represents a thematic break between paragraph-level elements: for example, a change of scene in a story, or a shift of topic within a section.

1. add a new html element
    <!-- create a new element
    set the attribute and text
    put the new to the parent -->
        var ele =   document.createElement();
        ele.id = 
        ele.innerText = 
        var parent = docutment.getElementById();
        parent.appendChild(ele);
    a specific element
        var ele =   document.createElement();
        ele.id = 
        ele.innerText = 
        var parent = docutment.getElementById();
        var spec = docutment.getElementById();
        parent.insertBefore(ele, spec);
    replace an elem in parr
        var ele =   document.createElement();
        ele.id = 
        ele.innerText = 
        var parent = docutment.getElementById();
        var rep = docutment.getElementById();
        parent.replaceChild(ele, rep);
    remove an ele
        var et = docutment.getElementById();
        et.element();
    clear all element
        two ways:
            var ne = document.getElementById('city');
            var fc = ne.firstChild();
            while (fc != null) {
                fc.remove();
                fc = ne.firstChild;
            }
            or
            ne.innerHTML = "";

2.re expression
    var patt = new RegExp(pattern, modifies);
    or
    var patt = /pattern/modifies;
    i do not care up and low case
    g search all 
    m mutiple lines

    var reg = /search/
    var str = "strings";
    find the result
    reg.test(str);
    get the resutl
    str.match(reg)
    str.replace(reg, "new string")

    () a commbine
    [a-z] choose one of them
    {1,} at least one time
    {1, n} one to n times
    + at least one time
    *  at leadt zero 
    ? zero or one
    /^[a-zA-Z0-9_.-]+@([a-zA-Z0-9-]+ [.]{1}) + [a-zA-Z] + $/
