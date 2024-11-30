<script lang="ts">
  import { Button, Heading, Card, Footer } from 'flowbite-svelte';

  let x = 55;
</script>
<head>
           
  <style>
  ul {
list-style-type: none;
margin: 0;
padding: 0;
overflow: hidden;
background-color: #333;
}
     
  li {
float: left;
}
     
  li a {
display: block;
color: white;
text-align: center;
padding: 16px 18px;
text-decoration: none;
}
     
  li a:hover {
background-color: #111;
     }
      


      </style>
      </head>
      
     
      <ul>
        <li><a class="active" href="+page.svelte">Home</a></li>
        <li><a href="Index_2.html">Our Services</a></li>
        <li><a href="Index3.html">About Us</a></li>
      </ul>

<main class="container mx-auto p-4">
  <Heading tag="h1" class="text-center text-4xl font-bold mb-4 text-white">PowerInMind</Heading>
  <p class="text-center text-lg mb-6 text-white">Smart ways to sustainably keep your home at a comfortable temperature and humidity.</p>
  <div class="text-center mb-8">
    <Button class="Button1" href="https://gen.xyz/" color="blue">Don't click me or else...</Button>
  </div>

  <section class="mt-8">
    <Heading tag="h2" class="text-2xl font-semibold mb-4 text-white"><u class="line">Our Services</u></Heading>
    <div class="grid grid-cols-1 md:grid-cols-3 gap-4">
      <Card>
        <h3 class="text-lg font-bold">Energy Efficiency</h3>
        <p>Optimize your home's energy usage with our advanced solutions.</p>
      </Card>
      <Card>
        <h3 class="text-lg font-bold">Smart Thermostats</h3>
        <p>Control your home's climate with our state-of-the-art smart thermostats.</p>
      </Card>
      <Card>
        <h3 class="text-lg font-bold">Humidity Control</h3>
        <p>Maintain optimal humidity levels for a healthier living environment.</p>
      </Card>
    </div>
  </section>

  <section class="mt-8">
    <Heading tag="h2" class="text-2xl font-semibold mb-4 text-white">About Us</Heading>
    <p class="text-white">PowerInMind is dedicated to providing innovative solutions for home energy management. Our mission is to help you create a sustainable and comfortable living environment.</p>
  </section>
</main>

<style>
  main {
      width: 100%;
      margin: 0;
      color: black;
      opacity: 0.95;
      background-color:  #ADD8E6;
  }
  
  p {
      text-align: left;
  }

  .container {
      margin: 0 auto;
  }

  .grid {
      margin-top: 15px;
      display: grid;
      gap: 1rem;
  }
</style>

