document.addEventListener('DOMContentLoaded', function() {
    // Handle the Order button click
    document.getElementById('orderBtn').addEventListener('click', function() {
        const puffs = [];
        for (let i = 1; i <= 10; i++) {
            const qty = document.getElementById(`puff${i}_qty`).value;
            if (qty > 0) {
                puffs.push({ name: `Puff ${i}`, quantity: qty, price: 3.00 });
            }
        }
        if (puffs.length > 0) {
            // Store the order details in local storage
            localStorage.setItem('order', JSON.stringify(puffs));
            // Redirect to the order details page
            window.location.href = 'mr_puffwala_order.html';
        } else {
            alert('Please select at least one puff to order.');
        }
    });

    // Handle the Review submit button click
    document.getElementById('submitReview').addEventListener('click', function() {
        const review = document.getElementById('reviewBox').value.trim();
        if (review) {
            alert('Thank you for your review!');
            document.getElementById('reviewBox').value = ''; // Clear the review box
        } else {
            alert('Please write a review before submitting.');
        }
    });
});
