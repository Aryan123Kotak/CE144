function placeOrder() {
    const cheeseQty = document.getElementById('cheese-qty').value;
    const vegQty = document.getElementById('veg-qty').value;
    const chickenQty = document.getElementById('chicken-qty').value;
  
    const orderDetails = {
      cheese: cheeseQty,
      veg: vegQty,
      chicken: chickenQty
    };
  
    localStorage.setItem('order', JSON.stringify(orderDetails));
    window.location.href = 'order-details.html';
  }
  
  window.onload = function () {
    const order = JSON.parse(localStorage.getItem('order'));
  
    if (order) {
      const cheeseTotal = order.cheese * 5;
      const vegTotal = order.veg * 4;
      const chickenTotal = order.chicken * 6;
      const totalPrice = cheeseTotal + vegTotal + chickenTotal;
  
      document.getElementById('order-details').innerHTML = `
        <p>Cheese Puff: ${order.cheese} pcs - $${cheeseTotal}</p>
        <p>Veg Puff: ${order.veg} pcs - $${vegTotal}</p>
        <p>Chicken Puff: ${order.chicken} pcs - $${chickenTotal}</p>
      `;
      document.getElementById('total-price').textContent = $${totalPrice};
}
  };