<style>
  @import 'https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css';
</style>

<script>
    import { Button, Col, Row } from '@sveltestrap/sveltestrap';
</script>
<main>
    <h1>Hello, World!</h1>
    <p>This is a simple SvelteKit app with Bootstrap 5.</p>
    <p>Click the button below:</p>
    <Row>
      <Col>
        <Button color="primary" onClick={() => alert('Button clicked!')}>Click Me!</Button>
      </Col>
    </Row>
    <p>This is a sample paragraph.</p>
</main>
  <Row>
    <Col>
      <Button color="danger" outline>Hello World!xcvxc</Button>
    </Col>
  </Row>