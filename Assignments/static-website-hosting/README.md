# Deploy a Static HTML Website on Ubuntu EC2 using Nginx

This guide shows how to deploy a simple static HTML website on an Ubuntu EC2 instance using Nginx.

---

## Prerequisites

Before starting, make sure you have:

- AWS account
- Ubuntu EC2 instance running
- EC2 key pair (`.pem`)
- SSH installed

Security Group rules should allow:

| Type | Port |
|--------|------|
| SSH | 22 |
| HTTP | 80 |

---

## Step 1: Connect to Ubuntu EC2

Move to the folder containing your `.pem` key.

Give permission:

```bash
chmod 400 mykey.pem
```

Connect via SSH:

```bash
ssh -i mykey.pem ubuntu@YOUR_PUBLIC_IP
```

Example:

```bash
ssh -i awskey.pem ubuntu@13.xxx.xxx.xxx
```

---

## Step 2: Update Ubuntu Packages

```bash
sudo apt update
```

---

## Step 3: Install Nginx

Install Nginx:

```bash
sudo apt install nginx -y
```

Start service:

```bash
sudo systemctl start nginx
```

Enable on boot:

```bash
sudo systemctl enable nginx
```

Check status:

```bash
sudo systemctl status nginx
```

---

## Step 4: Verify Nginx

Open browser:

```text
http://YOUR_PUBLIC_IP
```

You should see:

```text
Welcome to nginx
```

---

## Step 5: Remove Default Nginx Page

Go to website directory:

```bash
cd /var/www/html
```

Delete default page:

```bash
sudo rm index.nginx-debian.html
```

---

## Step 6: Create Website

Create HTML file:

```bash
sudo nano /var/www/html/index.html
```

Paste the following:

```html
<!DOCTYPE html>
<html>

<head>

<title>Ubuntu EC2 Deployment</title>

<style>

body{
    margin:0;
    font-family:Arial,sans-serif;
    background:#f2f4f8;
}

.container{
    height:100vh;
    display:flex;
    justify-content:center;
    align-items:center;
}

.card{
    width:500px;
    background:white;
    text-align:center;
    padding:40px;
    border-radius:15px;
    box-shadow:0 5px 15px rgba(0,0,0,.2);
}

h1{
    color:#0077ff;
}

button{
    padding:12px 25px;
    border:none;
    border-radius:5px;
    background:#0077ff;
    color:white;
    cursor:pointer;
}

button:hover{
    background:#0058c9;
}

</style>

</head>

<body>

<div class="container">

<div class="card">

<h1>Hello from Ubuntu EC2</h1>

<p>
Static website deployed using Nginx on AWS EC2
</p>

<button onclick="display()">
Click Me
</button>

<p id="msg"></p>

</div>

</div>

<script>

function display(){

document.getElementById("msg").innerHTML=
"Deployment Successful 🚀"

}

</script>

</body>
</html>
```

Save:

```text
CTRL + X
Y
ENTER
```

---

## Step 7: Reload Nginx

```bash
sudo systemctl reload nginx
```

Open:

```text
http://YOUR_PUBLIC_IP
```

Your website is now live.

---

## Useful Commands

Restart Nginx:

```bash
sudo systemctl restart nginx
```

Reload:

```bash
sudo systemctl reload nginx
```

Stop:

```bash
sudo systemctl stop nginx
```

Check status:

```bash
sudo systemctl status nginx
```

---

## Project Structure

```text
/var/www/html
│
└── index.html
```

---

## Technologies Used

- Ubuntu EC2
- Nginx
- HTML
- CSS
- JavaScript

---

## Result

Static website successfully hosted on Ubuntu EC2 using Nginx.
