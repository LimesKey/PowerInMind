<script lang="ts">
	import { Button, Heading, Card } from 'flowbite-svelte';
</script>

<main class="container mx-auto p-4">
	<section class="bg-gradient-to-b from-cyan-100 to-blue-300 text-center shadow-md p-11 mb-12 rounded-xl">
		<Heading tag="h1" class="text-4xl font-bold text-gray-800 mb-6">PowerInMind</Heading>
		<p class="text-lg text-gray-700 leading-relaxed mb-6">
			Charge your devices with power effiency in mind.
		</p>
		<Button class="text-white bg-primary-600 hover:bg-primary-700">
            Get Started
        </Button>
	</section>

	<section class="services">
		<Heading tag="h2" class="text-3xl font-semibold text-gray-800 text-center mb-8">Our Services</Heading>
		<div class="grid grid-cols-1 sm:grid-cols-2 md:grid-cols-3 gap-8">
			<Card class="p-6 shadow-lg rounded-lg border border-gray-200 bg-white hover:shadow-xl transition">
				<h3 class="text-xl font-bold text-primary-600 mb-4">Energy Efficiency</h3>
				<p class="text-gray-600">
					Save money, help the enviornment by charging only during low grid load.
				</p>
			</Card>
			<Card class="p-6 shadow-lg rounded-lg border border-gray-200 bg-white hover:shadow-xl transition">
				<h3 class="text-xl font-bold text-primary-600 mb-4">Smart Thermostats</h3>
				<p class="text-gray-600">
					Control your home's climate with our state-of-the-art smart thermostats.
				</p>
			</Card>
			<Card class="p-6 shadow-lg rounded-lg border border-gray-200 bg-white hover:shadow-xl transition">
				<h3 class="text-xl font-bold text-primary-600 mb-4">Humidity Control</h3>
				<p class="text-gray-600">
					Maintain optimal humidity levels for a healthier living environment while also saving energy for your benefit and the earths
				</p>
			</Card>
		</div>
	</section>
</main>
