const button=document.getElementById('button')
const data=document.getElementById('data')

button.addEventListener('click',async ()=>{
    const res=await axios.get(' https://api.tvmaze.com/singlesearch/shows?q=girls')
    .then(res=>{
        const id=res.data.id;
        const image=res.data.image.medium;
        data.createElement("DIV")
        data.append('DIV')
        console.dir(res)
        console.log(res.data.id)
    })
    .then()
})