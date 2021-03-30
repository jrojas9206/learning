import tensorflow.compat.v1 as tf 

tf.compat.v1.disable_eager_execution() # This only have to be use with tensorflow 1.X
                                    
in_a = tf.placeholder(dtype=tf.float32, shape=(2))

def model(x):
    with tf.variable_scope("matmul"):
        W = tf.get_variable("W", initializer=tf.ones(shape=(2,2)))
        b = tf.get_variable("b", initializer=tf.zeros(shape=(2)))
        return x * W + b

out_a = model(in_a)

with tf.Session() as sess:
    sess.run(tf.global_variables_initializer())
    outs = sess.run([out_a],
                   feed_dict={in_a:[1,0]}
                   )