document.getElementById('comment-form').addEventListener('submit', function(event) {
    event.preventDefault();
    const commentInput = document.getElementById('comment-input');
    const commentText = commentInput.value.trim();

    if (commentText !== "") {
        const commentsList = document.getElementById('comments-list');
        const newComment = document.createElement('li');
        newComment.textContent = commentText;
        commentsList.appendChild(newComment);
        commentInput.value = "";
    }
});