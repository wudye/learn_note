1_ Handle File
   1. let file = require('fs')
        file.createWriteStream(filename)
        write(content)
        write.close()
        or
        file.writeFile()
    2. readfile
    3. rename, mkdrir etc..
2.Handle http
    1: with the url keyword change the web
        link the http
        create the server
            use callback function to change web content
        create server listen
            const http = require('http');
            const { url } = require('inspector');
            const server = http.createServer((request, response) => {
                let method = request.method;
                // or let {method} = request; if the func has the method can use this way
                let parthname = new URL(request.url, 'http://127.0.0.1').pathname;
                // let {pathname} = new URL(request.url, 'http://127.0.0.1');


                if (method === 'GET' && parthname === '/log') {
                    response.end('log web');
                } else if (method === 'GET' && parthname === '/search') {
                    response.end('search web');
                } else {
                    response.end('404')
                }
            })
    2: set response header
        const http = require('http');
        const { url } = require('inspector');
        const server = http.createServer((request, response) => {
            response.statusCode = 300;
            response.statusMessage = 'This is a message';
            response.setHeader('jkjjkjkjj', 'ddd');
            // how to set more than one header
            response.setHeader('Nod', ['a', 'b']);
            response.write("hhh");
            response.write('aaa\n');
            response.write('dddß\n');
            response.end('this is practice');
        })

        server.listen(9000, () => {
            console.log("server.start");
        })

    3: response to request a table
        use node.js readfile transfer the html to end
            const http = require('http');
            const fs = require('fs');
            const { url } = require('inspector');
            const server = http.createServer((request, response) => {
                let html = fs.readFileSync('fro.html');
                response.end(html);
            })

            server.listen(9000, () => {
                console.log("server.start");
            })

0051