const express = require('express')
const app = express()

app.set('view engine', 'pug')
app.set('views','./views');

app.get('/', (req, res) => {
    console.log(req.url)
    res.send("Hello Nguyen")
})

app.get('/update.bin', (req, res) => {
    let date = new Date()
    console.log(date)
    let file = __dirname + '/public/update.bin'
    // let file = __dirname + '/public/file.txt'
    res.download(file)
})

app.get('/nghia.bin', (req, res) => {
    let date = new Date()
    console.log(date)
    let file = __dirname + '/public/nghia.bin'
    // let file = __dirname + '/public/file.txt'
    res.download(file)
})

app.get('/nguyen.bin', (req, res) => {
    let date = new Date()
    console.log(date)
    let file = __dirname + '/public/nguyen.bin'
    // let file = __dirname + '/public/file.txt'
    res.download(file)
})

app.listen(3000)