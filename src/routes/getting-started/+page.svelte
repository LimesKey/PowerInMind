<script lang="ts">
	import { Button, Heading, Card } from 'flowbite-svelte';
</script>

<section>
	<section class="head">
		<Heading class="h1">Dashboard</Heading>
	</section>
</section>

<style>
	.head {
	background-image: linear-gradient(#cffafe, #A4CAFE);
	text-align: center;
	--tw-shadow: 0 4px 6px -1px rgb(0 0 0 / 0.1), 0 2px 4px -2px rgb(0 0 0 / 0.1);
    --tw-shadow-colored: 0 4px 6px -1px var(--tw-shadow-color), 0 2px 4px -2px var(--tw-shadow-color);
    box-shadow: var(--tw-ring-offset-shadow, 0 0 #0000), var(--tw-ring-shadow, 0 0 #0000), var(--tw-shadow);
	padding: 2.75rem;
	margin-bottom: 3rem ;
	border-radius: 1rem ;
	--tw-text-opacity: 1;
    color: rgb(31 41 55 / var(--tw-text-opacity, 1)) ;
	}
	.h1 {
	font-size: 2.25rem /* 36px */;
    line-height: 2.5rem /* 40px */;
	font-weight: 700;
	margin-bottom: 1.5rem /* 24px */;
	--tw-text-opacity: 1;
    color: rgb(31 41 55 / var(--tw-text-opacity, 1)) /* #1f2937 */;
	}
</style>
